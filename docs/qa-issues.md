# QA Issue Register and Root-Cause Analysis

This register analyzes the repository's existing GitHub issues using source inspection, documentation review, and logical reasoning. It does not claim physical tests, circuit inspection, compilation, or upload. Five-Why chains below are conditional analysis of risks or improvement requests, not assertions that an incident occurred. All five existing issues are preserved.

## Issue summary

| GitHub issue | Topic | Severity | Priority | Static-review status |
|---|---|---|---|---|
| [#1 Verify LED pin configuration](https://github.com/adityaambure2145-ui/arduino-led-blink-qa/issues/1) | Pin selection | Medium if incompatible pin prevents intended output | P1 | Source uses `LED_BUILTIN`; board-specific mapping and physical output are NOT RUN / unverified. |
| [#2 Add missing resistor to circuit documentation](https://github.com/adityaambure2145-ui/arduino-led-blink-qa/issues/2) | External LED safety documentation | High if an external LED is connected without suitable current limiting | P1 | README warns of current limiting and identifies 220 ohms as an example; no diagram or physical circuit inspection. Documentation review only. |
| [#3 Verify LED blinking interval](https://github.com/adityaambure2145-ui/arduino-led-blink-qa/issues/3) | Timing | Medium if the intended timing is not met | P2 | Both source delays use 1000 ms; runtime timing measurement is NOT RUN. |
| [#4 Investigate LED not blinking](https://github.com/adityaambure2145-ui/arduino-led-blink-qa/issues/4) | Functional failure investigation | High if primary behavior fails | P1 | No failure is established by repository evidence. Source control flow was reviewed; hardware reproduction is NOT RUN. |
| [#5 Improve code readability](https://github.com/adityaambure2145-ui/arduino-led-blink-qa/issues/5) | Maintainability | Low | P3 | Named constants and a purpose comment are present by static review; no compile check was run. |

## Issue #1 — Verify LED pin configuration

**Five Whys (conditional risk analysis)**
1. Why might an intended LED fail to respond? The selected output may not control that LED.
2. Why might the output not control it? `LED_BUILTIN` mapping is defined by the selected board, while an external LED may use a different pin.
3. Why might the selected mapping not match expectations? The target board and LED arrangement are not specified in the repository.
4. Why is the mapping not confirmed? This activity is limited to repository/source review and has no physical setup evidence.
5. Why does that leave uncertainty? Static code alone cannot establish a board's runtime pin mapping or physical output.

**Root-cause status:** No fault is confirmed. Static review finds `const int LED_PIN = LED_BUILTIN;`; board-specific mapping is not verified.

**Severity / priority:** Medium if the selection is incompatible; P1 due to its relation to the intended output.

**Proposed solution:** Retain the portable built-in LED constant unless source/documentation evidence identifies a code-level mismatch. Record physical mapping as NOT RUN for this activity; do not claim board verification.

**Acceptance criteria:** Source uses a named pin selection and initializes it as output (reviewed); board-dependent behavior is explicitly marked NOT RUN. No hardware acceptance claim is made.

## Issue #2 — Add missing resistor to circuit documentation

**Five Whys (conditional documentation-risk analysis)**
1. Why could an external LED circuit be unsafe? It could be described or assembled without suitable current limiting.
2. Why could a reader miss the resistor requirement? A wiring diagram or instructions could omit or understate it.
3. Why is the diagram question unresolved? The repository contains no circuit diagram.
4. Why is there no circuit evidence? The example sketch targets the built-in LED and this activity reviews documentation rather than a physical build.
5. Why must the scope be stated? External LED electrical safety depends on actual circuit values and cannot be proven from the sketch alone.

**Root-cause/status:** The README contains a current-limiting warning and mentions 220 ohms as an example requiring verification. No physical circuit was inspected; no unsafe wiring is established.

**Severity / priority:** High if an external LED is used without suitable current limiting; P1 for clear safety documentation.

**Proposed solution:** Preserve the warning and qualify the example value. A diagram should only be added if an external LED circuit is in scope and its assumptions can be stated; no physical suitability claim is made here.

**Acceptance criteria:** Repository documentation requires suitable series current limiting and does not present an example resistor value as universally valid (documentation reviewed). Physical circuit inspection remains NOT RUN.

## Issue #3 — Verify LED blinking interval

**Five Whys (conditional timing-risk analysis)**
1. Why might observed timing differ from the intention? A phase could differ from approximately one second.
2. Why might source timing differ? Delay constants or control flow could be inconsistent.
3. Why can source consistency be checked here? Both `delay()` calls can be compared with the declared interval by inspection.
4. What does that check establish? Only that the source uses the same 1000 ms constant for each phase.
5. Why does it not confirm actual timing? Runtime measurement would require executing the program, and no such measurement is part of this activity.

**Root-cause/status:** No defect is established. Static inspection finds `BLINK_INTERVAL = 1000` and both delays use it. Actual timing is NOT RUN.

**Severity / priority:** Medium if required timing is not met; P2.

**Proposed solution:** No code change is indicated by static review. Document source-level timing and distinguish it from physical measurement.

**Acceptance criteria:** Code review confirms both phases use the declared interval (reviewed); actual interval measurement remains NOT RUN and is not reported as verified.

## Issue #4 — Investigate LED not blinking

**Five Whys (conditional diagnostic analysis; no failure reproduced)**
1. Why might the intended behavior be absent? A runtime environment might not show the expected output.
2. Why could that happen? Possible causes include a compile/configuration issue, board mapping, upload, wiring, power, or component behavior.
3. Why is no one cause selected? Repository evidence does not establish a reproduced failure or runtime observations.
4. What can this activity inspect? It can trace source control flow and review documented assumptions, not upload or observe a board.
5. Why is resolution not asserted? A plausible code path is not evidence that the program compiled or the physical LED behaved as intended.

**Root-cause/status:** Unknown; no actual failure is established. Static analysis finds the intended HIGH-delay-LOW-delay sequence in `loop()`. Compilation, upload, and hardware behavior are NOT RUN.

**Severity / priority:** High if the primary behavior fails; P1 for tracking the concern.

**Proposed solution:** Record the source-level logic review as such. Keep hardware/toolchain hypotheses unconfirmed and do not claim a hardware fix or retest.

**Acceptance criteria:** Source-level behavior is reviewed and documented; compiler/upload/hardware cases remain NOT RUN. No issue closure is justified by this activity alone.

## Issue #5 — Improve code readability

**Five Whys (original maintainability request)**
1. Why request a readability improvement? Clear identifiers and comments help readers understand intent.
2. Why might intent be hard to understand? Raw pin/timing values or missing context can obscure their role.
3. What source patterns address that concern? Named `LED_PIN` and `BLINK_INTERVAL` constants plus a project-purpose comment.
4. Are those patterns present? Yes, by inspection of the current sketch.
5. What does source review not establish? Compilation or behavior on a target board.

**Root-cause/status:** The specific readability concerns described in issue #5 are addressed in the current source by static inspection; compilation was not checked.

**Severity / priority:** Low; P3.

**Proposed solution:** No additional source edit is necessary based on current static review. Avoid changing code without a concrete finding.

**Acceptance criteria:** Named pin and interval constants and explanatory header remain present (reviewed). Compilation is not claimed; keep issue closure decisions to the repository owner and use the evidence/criteria in the existing issue.

## Issue handling

This activity does not close or modify the existing GitHub issues. The register provides analysis and proposed criteria; it is not evidence of a physical diagnosis, compilation, upload, or test. Keep hardware-dependent criteria identified as NOT RUN and link only genuine evidence when updating issue status.
