# Project Plan and Tracking — Project Management IA-2

## Scope and objective

This AI-assisted GitHub activity uses the Arduino LED Blink sketch as an example for static code review, logical QA analysis, test-case design, issue documentation, and project tracking. It does not include physical Arduino testing, circuit inspection, or sketch upload. The repository contains the example source, five existing QA issues, a test plan, and project documentation.

## Work breakdown and live status

Priorities: **P1** core source/safety documentation review; **P2** test and issue traceability; **P3** maintainability. Status reflects repository evidence only.

| ID | Task / deliverable | Priority | GitHub issue | Status / evidence | Exit criteria / next action |
|---|---|---|---|---|---|
| T1 | Review pin declaration and output initialization | P1 | #1 | REVIEWED: source uses `LED_BUILTIN` and configures output; board mapping is NOT RUN | Retain static finding; make no board-behavior claim. |
| T2 | Review external LED safety wording | P1 | #2 | REVIEWED: README requires current limiting and qualifies 220 ohms as an example; no diagram/circuit inspection | Keep documentation qualification; physical circuit check is outside scope/NOT RUN. |
| T3 | Perform source-level control-flow and interval analysis | P1 | #3, #4 | REVIEWED: source has HIGH-delay-LOW-delay sequence and uses 1000 ms for each phase | Report only logical/source result; runtime behavior remains NOT RUN. |
| T4 | Define test cases and expected outcomes | P2 | #1–#5 | COMPLETED in `docs/test-plan.md`: static cases distinguished from compiler/hardware tests | Preserve actual status labels; do not convert NOT RUN to PASS. |
| T5 | Document conditional root causes, severity, priorities, solutions, acceptance criteria | P2 | #1–#5 | COMPLETED in `docs/qa-issues.md`; no issues altered or closed | Update GitHub issues only with truthful review/evidence; no closure based on this documentation alone. |
| T6 | Check source readability | P3 | #5 | REVIEWED: named constants and explanatory header exist; compiler check NOT RUN | No code change warranted absent a concrete static finding. |
| T7 | Maintain IA-2 workflow, milestones, and progress record | P2 | N/A | COMPLETED as repository plan on branch `qa/ia2-pending-work` | Review changes and use a PR to merge according to normal repository workflow. |
| T8 | Personal learning reflection and collaboration claims | P2 | N/A | PARTIAL: objectives/workflow documented; personal reflection and independent collaborator evidence not established | Student adds a truthful personal reflection; report collaborators only if they actually participated. |

## Milestones

| Milestone | Completion condition | Current state |
|---|---|---|
| M1 — Repository baseline and static QA | Review source, README, test plan, and existing issues; document findings | COMPLETED in repository documentation; no execution claims. |
| M2 — Test design and traceability | Define expected results and distinguish review from unrun tests | COMPLETED in `docs/test-plan.md`; compiler and hardware tests remain NOT RUN. |
| M3 — Project handoff | Branch changes reviewed and merged through GitHub workflow; personal reflection supplied by student | In progress; review/merge and personal reflection remain. |

## Workflow and tracking

- Preserve and refer to existing GitHub issues #1–#5; do not create duplicate issue records.
- Documentation changes are on `qa/ia2-pending-work`; review them and merge via a pull request.
- This markdown work breakdown is the project tracking record. A Projects board was not verified using the available project-board API during this work; no claim is made that a board exists or was created.
- Statuses describe only source/documentation review. Compilation, upload, physical observation, timing measurement, and circuit inspection are outside this activity and marked NOT RUN in the test plan.
- Repository history shows owner-authored commits and a prior merged PR #6; it does not establish additional collaborators or independent review.

## Risks and assumptions

| Risk / assumption | Impact | Handling in this activity |
|---|---|---|
| Board-specific `LED_BUILTIN` mapping is not checked | Static review cannot prove which physical LED responds | Document the source constant; mark hardware behavior NOT RUN. |
| No compiler/toolchain invocation or output available | Compilation cannot be reported as passed | Mark compile check NOT RUN; use source inspection only. |
| External LED circuit is not part of this activity | Resistor suitability cannot be confirmed | Retain current-limiting warning and qualify example values; no circuit inspection claim. |
| No independent collaboration evidence | Collaboration outcomes cannot be claimed | Describe repository workflow without attributing unverified participation. |
