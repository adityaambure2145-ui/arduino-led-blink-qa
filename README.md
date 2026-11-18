# Arduino LED Blinking with QA Documentation

## 1. Project overview

A small Arduino C++ sketch blinks the board's built-in LED. This Project Management IA-2 repository combines the code with QA issues, test documentation, and project tracking.

## 2. Objectives and scope

- Implement a basic built-in LED blink program.
- Practice embedded C++ source review and quality assurance.
- Track potential or observed defects with GitHub Issues and evidence-based acceptance criteria.
- Use a branch and pull request workflow for changes.
- Track verification tasks and outcomes without claiming tests that were not performed.

## 3. Hardware and software

- Arduino Uno or compatible board (record the actual target before testing)
- USB cable and computer
- Arduino IDE or CLI with the appropriate board core
- Optional external LED, breadboard, and a suitable series current-limiting resistor

The README's 220-ohm value is an example, not a universal guarantee; verify resistor selection against the actual LED, supply, and board limits. The sketch uses the board's `LED_BUILTIN` constant.

## 4. Source code description

`LED_Blink.ino` configures `LED_PIN` (`LED_BUILTIN`) as an output. `loop()` sets the pin HIGH and LOW with `BLINK_INTERVAL` (1000 ms) after each transition. This describes the source; actual compilation, upload, and board behavior must be verified on the selected hardware.

## 5. QA and root-cause analysis

The existing GitHub issues [#1–#5](https://github.com/adityaambure2145-ui/arduino-led-blink-qa/issues) are preserved. Their detailed severity, priority, conditional Five-Why analyses, proposed solutions, acceptance criteria, and evidence gaps are in [`docs/qa-issues.md`](docs/qa-issues.md). Potential causes are not presented as confirmed defects. Do not close an issue without evidence satisfying its acceptance criteria.

## 6. Tests and results

Test procedures, expected outcomes, actual-result fields, and evidence requirements are in [`docs/test-plan.md`](docs/test-plan.md). The present record contains no hardware/compiler execution evidence: physical tests are marked NOT RUN. Source inspection is separately identified and is not equivalent to a compile or hardware test.

## 7. Project planning and tracking

The work breakdown, priorities, status, milestones, dependencies, risks, and next actions are recorded in [`docs/project-plan.md`](docs/project-plan.md). The plan tracks the existing issues rather than creating duplicate tasks. No project board is claimed: board existence could not be confirmed through the available API in this work session.

## 8. Workflow and collaboration record

The repository history contains owner-authored commits and a previously merged documentation pull request (#6). This demonstrates use of commits, a branch, and a pull request; it does not establish contributions by other collaborators. Reviewers/collaborators and their feedback should be recorded only if they actually participate.

For this pending documentation update, review branch `qa/ia2-pending-work` and use a pull request to merge. Record genuine review and test evidence before merging or closing related issues.

## 9. Learning outcomes

The activity is intended to practice Arduino C++, issue-based QA, root-cause analysis, test planning, Git branching/pull requests, and project tracking. These are learning objectives, not independently verified personal outcomes; the student should add a truthful reflection on what was learned and any challenges after completing the work.

## 10. Author and activity

- Name: Aditya Ambure
- PRN: 202301070154
- Course: Project Management
- Activity: 2

## Related records

- [QA issue register and root-cause analysis](docs/qa-issues.md)
- [Test plan and results](docs/test-plan.md)
- [Project plan and tracking](docs/project-plan.md)
- [AI assistance log](docs/ai-prompt-log.md)
