# Project Plan and Tracking — Project Management IA-2

## Scope and objective

Deliver and verify a basic Arduino built-in LED blink sketch, with traceable QA issues, test evidence, safe external-LED guidance, and a concise project record. The current repository includes `LED_Blink.ino`, a README, a QA issue register, and a test plan. The five GitHub issues remain open; no hardware execution evidence is recorded.

## Work breakdown and live status

Priorities: **P1** safety/core-function verification; **P2** behavior verification; **P3** low-risk maintainability follow-up. Statuses below describe evidence available in the repository, not a claim that work was performed externally.

| ID | Task / deliverable | Priority | GitHub issue | Status / progress evidence | Exit criteria / next action |
|---|---|---|---|---|---|
| T1 | Confirm target board, `LED_BUILTIN` mapping, and LED arrangement | P1 | #1 | Pending; board and physical setup not recorded | Record board/setup; compile, upload, observe; attach evidence. |
| T2 | Validate external LED resistor guidance and add a diagram only if the external circuit is in scope | P1 | #2 | Partially complete: README requires current limiting and mentions 220 ohms; no diagram or physical circuit record | Verify circuit assumptions; document series resistor and validated value if diagram is added. |
| T3 | Compile and upload sketch for target board | P1 | #4 (also #1/#5) | Pending; no compiler/upload logs | Record environment and successful compile/upload output. |
| T4 | Observe LED output and investigate any failure | P1 | #4 | Pending; no failure reproduction or physical observation | Record behavior and, only if failure occurs, evidence-based root cause/fix/retest. |
| T5 | Measure ON/OFF intervals | P2 | #3 | Pending; source constant is 1000 ms but no measurement | Measure each phase, record method/tolerance/results, correct only if needed. |
| T6 | Review naming/comments and compile | P3 | #5 | Partially complete: named constants and header comment already present; compile evidence absent | Keep code unchanged unless a concrete issue is found; attach review and compile evidence. |
| T7 | Maintain issue analysis, acceptance criteria, and test evidence | P2 | #1–#5 | Documentation completed in this branch; issues still require their own investigation/evidence | Add links/results to each existing issue; close only after its criteria pass. |
| T8 | Final IA-2 traceability and learning reflection | P2 | N/A | Partially complete: README describes objectives/workflow/outcomes; personal reflection and verified outcomes are not evidenced here | Student confirms actual learning and adds specific truthful reflection if needed. |

## Milestones

| Milestone | Target / dependency | Completion condition | Current state |
|---|---|---|---|
| M1 — Baseline and QA record | Existing sketch and issue list | Source and all existing issues reviewed; analysis and test plan linked | Documentation update prepared on `qa/ia2-pending-work`; awaiting review/merge. |
| M2 — Board setup verified | Requires physical board and selected IDE/core | TC01–TC03 performed with environment/evidence | Not started; hardware access and execution evidence required. |
| M3 — Timing and recovery verified | Depends on M2 | TC04–TC06/TC09 completed; issues updated based on evidence | Not started. |
| M4 — IA-2 handoff | Depends on M1–M3 and board availability | README, issue evidence, test results, plan, and truthful reflection complete | In progress; physical verification and personal reflection remain. |

## Tracking and workflow

- Use the existing GitHub issues #1–#5 as the source of bug/verification records; do not create duplicates.
- Current branch: `qa/ia2-pending-work`. Review this branch and merge via a pull request after checking the documentation.
- This plan is a repository-based tracking table. An existing GitHub Projects board could not be verified using the available project-board API endpoint in this session, so no new board was created and no board is claimed to exist.
- Progress should be updated only when evidence changes a task status. Keep hardware work pending until physically performed.
- The visible commit/PR history identifies the repository owner's contributions. It is not evidence of additional collaborators; do not claim collaboration that is not recorded.

## Risks and dependencies

| Risk/dependency | Impact | Response |
|---|---|---|
| No physical board/test access recorded | Pin, upload, blink, timing, and restart criteria cannot be confirmed | Perform tests on the chosen board and attach genuine results. |
| Board and LED configuration unspecified | `LED_BUILTIN` and external resistor assumptions are board/circuit dependent | Record actual model, wiring, supply, and relevant specifications before concluding. |
| No verified Projects board API result | Cannot safely assert absence or create a non-duplicate board | Check repository/user Projects in GitHub UI; if none exists and desired, create/link one manually. |
| No independent reviewer/collaborator evidence | Collaboration outcomes cannot be claimed | Invite a reviewer only if desired; record actual review, feedback, and response. |
