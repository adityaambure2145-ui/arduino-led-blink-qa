# AI Assistance Log — Project Management IA-2

This log records AI assistance used for repository-based QA and documentation. It does not claim that suggested tests, compilation, upload, or physical work occurred.

| Date | Prompt / task summary | Repository work recorded | Verification boundary |
|---|---|---|---|
| 2026-11-18 | Audit the existing IA-2 repository and complete pending QA analysis, test documentation, project tracking, and documentation on the existing branch. | Reviewed the README, `LED_Blink.ino`, QA/test documentation, repository history and the five existing issues; drafted evidence-qualified root-cause analysis, test cases, and a project plan. | Source/documentation review only. No compiler invocation, upload, hardware test, or circuit inspection is claimed. |
| 2026-11-18 | Adapt the activity to static code review and logical analysis; identify hardware-dependent checks as NOT RUN and present the work as AI-assisted GitHub QA/documentation. | Updated README, QA register, test plan, and project tracking to distinguish reviewed code/documentation from unrun compiler and hardware tests; preserved existing issues and plan. | Static source inspection and logical reasoning only. Arduino toolchain output was unavailable; physical testing is excluded from the activity. |

## Non-fabrication note

Five-Why chains in `docs/qa-issues.md` are conditional hypotheses where no defect is established. Code inspection can describe source structure and logic but does not demonstrate compilation or runtime behavior. Hardware-dependent cases remain NOT RUN, and the documentation does not claim that a sketch was uploaded or a board physically tested.
