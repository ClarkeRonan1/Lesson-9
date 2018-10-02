.PHONY: clean All

All:
	@echo "----------Building project:[ ChallengeExercise - Debug ]----------"
	@cd "ChallengeExercise" && "$(MAKE)" -f  "ChallengeExercise.mk"
clean:
	@echo "----------Cleaning project:[ ChallengeExercise - Debug ]----------"
	@cd "ChallengeExercise" && "$(MAKE)" -f  "ChallengeExercise.mk" clean
