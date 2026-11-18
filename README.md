# Arduino LED Blinking — AI-Assisted QA and Documentation Activity

## 1. Activity overview

This is an AI-assisted, GitHub-based Project Management IA-2 QA and documentation activity. The small Arduino LED Blink sketch is the example under review; the activity focuses on repository inspection, static code review, logical analysis, issue traceability, test design, and project tracking. **No physical Arduino testing, wiring inspection, or sketch upload is part of this activity.**

## 2. Objectives and scope

- Review the Arduino C++ example using source-level inspection and logical reasoning.
- Document existing QA issues with conditional root-cause analysis, severity, priority, proposed solutions, and acceptance criteria.
- Define test cases with expected outcomes and distinguish static review from hardware-dependent checks.
- Use GitHub branches, commits, issues, and pull requests to demonstrate project workflow.
- Track tasks, milestones, and progress without claiming unperformed tests or collaboration.

## 3. Example sketch and code description

`LED_Blink.ino` is intended to blink a board's built-in LED. Static inspection finds `LED_PIN` assigned to `LED_BUILTIN`, `BLINK_INTERVAL` set to 1000 milliseconds, output initialization in `setup()`, and HIGH/LOW writes separated by that delay in `loop()`. This explains the source-level control flow only. It does **not** establish successful compilation, board-specific pin mapping, upload, or physical LED behavior.

The source is reviewed as an Arduino C++ sketch. An Arduino compiler/toolchain run was not available as part of this documentation task, so compilation is not claimed or marked passed.

## 4. QA issues and root-cause analysis

Existing GitHub issues [#1–#5](https://github.com/adityaambure2145-ui/arduino-led-blink-qa/issues) are preserved. The register in [`docs/qa-issues.md`](docs/qa-issues.md) maps each issue to evidence in the repository and provides conditional Five-Why analysis, severity, priority, proposed solution, and acceptance criteria. Hypotheses are not reported as confirmed defects. Hardware-dependent questions remain explicitly unverified and are outside this activity's execution scope.

## 5. Test approach and results

QA verification for this activity uses static source review, documentation inspection, and logical analysis. Defined cases and their expected results are in [`docs/test-plan.md`](docs/test-plan.md). Source/documentation cases may be marked REVIEWED only for the precise checks performed. Compilation/toolchain tests are NOT RUN because no compiler invocation or output is available. Upload, LED observation, timing measurement, reset behavior, and circuit inspection are hardware-dependent and NOT RUN; no hardware upload or physical testing is implied.

## 6. Project planning and tracking

The scope, work breakdown, priorities, statuses, milestones, risks, and next actions are recorded in [`docs/project-plan.md`](docs/project-plan.md). Tasks outside the static-review activity are identified as not run/out of scope rather than treated as completed. The plan tracks the existing issues rather than creating duplicate GitHub issues.

## 7. GitHub workflow and collaboration summary

Repository history records owner-authored commits and the previously merged documentation PR #6. This is evidence of GitHub commit/branch/PR workflow, not evidence of additional collaborators or independent review. This documentation update is on branch `qa/ia2-pending-work`; it should be reviewed and merged through the repository's normal PR process. No collaboration, review feedback, compilation, upload, or hardware result is claimed unless separately recorded with evidence.

## 8. Learning outcomes

The activity provides practice in static code review, logical QA analysis, issue writing, root-cause documentation, test design, project planning, and GitHub workflow. These are intended learning outcomes; the student should add or adapt a personal reflection to represent their own experience accurately.

## 9. Author and activity

- Name: Aditya Ambure
- PRN: 202301070154
- Course: Project Management
- Activity: 2

## Related records

- [QA issue register and root-cause analysis](docs/qa-issues.md)
- [Static review and test cases](docs/test-plan.md)
- [Project plan and tracking](docs/project-plan.md)
- [AI assistance log](docs/ai-prompt-log.md)
