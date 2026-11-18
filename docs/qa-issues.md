# QA Issue Register and Root-Cause Analysis

This register maps the existing GitHub issues to evidence in the repository. Issues describe reported or potential defects; a listed cause is a hypothesis unless an observation confirms it. No hardware diagnosis or test result is claimed here.

## Issue summary

| GitHub issue | Topic | Severity | Priority | Evidence-based status |
|---|---|---|---|---|
| [#1 Verify LED pin configuration](https://github.com/adityaambure2145-ui/arduino-led-blink-qa/issues/1) | Board/pin compatibility | Medium (if incompatible pin prevents output) | P1 | Sketch uses `LED_BUILTIN`; target-board compatibility and physical output still need verification. |
| [#2 Add missing resistor to circuit documentation](https://github.com/adityaambure2145-ui/arduino-led-blink-qa/issues/2) | External LED safety documentation | High (if external LED is connected without current limiting) | P1 | README mentions a 220-ohm resistor and current limiting; there is no circuit diagram. Confirm the value against the board, LED, and supply before treating this as resolved. |
| [#3 Verify LED blinking interval](https://github.com/adityaambure2145-ui/arduino-led-blink-qa/issues/3) | Timing | Medium (if required timing is not met) | P2 | Source sets each delay to 1000 ms; measured timing is not available. |
| [#4 Investigate LED not blinking](https://github.com/adityaambure2145-ui/arduino-led-blink-qa/issues/4) | Functional/hardware investigation | High if the primary function fails | P1 | No failure reproduction or diagnosis is recorded. Do not assign a definitive root cause until investigated. |
| [#5 Improve code readability](https://github.com/adityaambure2145-ui/arduino-led-blink-qa/issues/5) | Maintainability | Low | P3 | Source already has `LED_PIN`, `BLINK_INTERVAL`, and a purpose comment. Compilation evidence is still absent. |

## Issue #1 — Verify LED pin configuration

**Five Whys (conditional diagnostic chain; not a confirmed incident)**
1. Why might the intended LED not respond? The configured output may not control the LED in the selected setup.
2. Why might the output not control it? The selected board may map `LED_BUILTIN` differently, or an external LED may use another pin.
3. Why might the selected pin and setup differ? The actual board or wiring may differ from the documented target.
4. Why could that mismatch go unnoticed? No board model, wiring record, or upload/observation evidence is currently recorded.
5. Why is verification not recorded? The repository's test plan is a template and contains no executed results.

**Root-cause status:** Unknown; this is a risk hypothesis, not a confirmed fault. `LED_Blink.ino` uses `const int LED_PIN = LED_BUILTIN;`.

**Severity / priority:** Medium if incompatible; P1 because output depends on correct configuration.

**Proposed solution:** Record the exact board and LED arrangement, check its built-in LED pin mapping, and only change the sketch if evidence identifies a mismatch. Preserve `LED_BUILTIN` for supported built-in LEDs; use an explicitly verified pin only for a documented external circuit.

**Acceptance criteria:** Board model and LED type are recorded; the pin mapping is checked against that board; compile/upload and output evidence is added; any change is reviewed against the evidence. Until physical verification is performed, keep the issue open.

## Issue #2 — Add missing resistor to circuit documentation

**Five Whys (conditional documentation-risk chain)**
1. Why could an external LED be damaged or overloaded? It may be connected without suitable current limiting.
2. Why might it be connected that way? A wiring diagram or instruction might omit the resistor.
3. Why might that omission persist? No circuit diagram or circuit-inspection evidence is in the repository.
4. Why is a diagram absent? The project currently documents the sketch and a brief hardware list, not a full external-LED build.
5. Why should the documentation distinguish these setups? The sketch uses the board's built-in LED by default, while an external LED requires a suitable series resistor selected for its circuit.

**Root-cause status:** Missing diagram is observable in the repository; an unsafe physical circuit is not established. The README already says an optional external LED requires a current-limiting resistor and lists 220 ohms as an example. That value is not a universal design guarantee.

**Severity / priority:** High if an external LED is used without suitable current limiting; P1 for safety documentation.

**Proposed solution:** Keep the explicit resistor warning. If publishing a wiring diagram, show a series resistor and state that its value must be verified for the supply voltage, LED forward voltage/current, and board limits. Do not claim physical wiring was inspected.

**Acceptance criteria:** External-LED instructions do not imply direct connection without current limiting; any diagram clearly shows the resistor in series and identifies the verified design assumptions; review evidence is recorded. The currently missing diagram remains a documentation gap, not a confirmed hardware defect.

## Issue #3 — Verify LED blinking interval

**Five Whys (conditional timing discrepancy chain)**
1. Why might observed blinking differ from the target? An ON or OFF phase might not be approximately one second.
2. Why might a phase differ? A delay value or logic could be wrong, or execution/environment effects could alter observed timing.
3. Why might the configured value be wrong? The source constant could be changed without corresponding verification.
4. Why would that change escape detection? There is no recorded timing measurement.
5. Why is measurement absent? The test-plan results have not been filled in.

**Root-cause status:** No timing defect is confirmed. Source inspection shows `BLINK_INTERVAL = 1000` milliseconds for both phases; measurement has not been run.

**Severity / priority:** Medium if the target interval is missed; P2.

**Proposed solution:** Keep the 1000 ms constant unless measurement demonstrates a defect; measure ON and OFF phases separately and record the method and result.

**Acceptance criteria:** Both measured phases are approximately 1 second within a documented tolerance, or a justified correction is made and re-tested. Do not mark the timing verified based solely on source inspection.

## Issue #4 — Investigate LED not blinking

**Five Whys (triage tree; do not treat as a proven causal chain)**
1. Why might the LED not blink? The expected output is absent.
2. Why might output be absent? Possible causes include failed compilation/upload, wrong board or pin, wiring/power issue, or a faulty component.
3. Why has a cause not been selected? The issue has no recorded reproduction, compiler output, upload result, or board/wiring details.
4. Why is diagnosis blocked? The necessary observation/evidence has not been captured in the issue or test results.
5. Why is resolution not established? No verified cause-and-fix retest is documented.

**Root-cause status:** Unknown; the repository does not establish that the failure occurred. The issue's potential causes remain diagnostic hypotheses.

**Severity / priority:** High if reproduced because it blocks the primary behavior; P1 investigation.

**Proposed solution:** Reproduce and record board, IDE/core version, compile output, upload outcome, pin/LED arrangement, and power. Isolate software from wiring, fix only the identified cause, then repeat the same test.

**Acceptance criteria:** A reproducible failure has a recorded cause and corrective action; the sketch compiles/uploads and the LED behavior is observed after correction; evidence is linked. If the failure cannot be reproduced, document that fact without claiming resolution.

## Issue #5 — Improve code readability

**Five Whys (based on the original improvement request, not a confirmed defect)**
1. Why was readability raised? The sketch could be easier to understand and maintain.
2. Why could it be unclear? Raw pin/timing values or missing purpose comments would obscure intent.
3. Why would raw values be problematic? Their meaning and intended duration would not be self-describing.
4. Why would that matter? Future edits could change behavior without recognizing the intended one-second phases.
5. Why might a review not catch regressions? No compilation or documented review result is attached to the issue.

**Root-cause/status:** The current sketch already uses `LED_PIN`, `BLINK_INTERVAL`, and a brief project/purpose/board comment, so the specific readability change proposed by Issue #5 is present. Compilation has not been evidenced; retain the open issue until its acceptance checks are met.

**Severity / priority:** Low; P3.

**Proposed solution:** No source change is currently justified. Review the existing names and comments, compile using the target board, and add evidence. Avoid gratuitous code changes.

**Acceptance criteria:** Named pin and interval constants remain clear; comments describe the behavior; sketch compiles for the recorded target; review/compile evidence is attached before closing.

## Issue handling

Keep all five existing GitHub issues open until their acceptance criteria have evidence. A proposed correction in this register is not proof of resolution. Update each issue with its own investigation, evidence, and fix/verification links when available.
