.PHONY: clean All

All:
	@echo "----------Building project:[ WhileLoops - Debug ]----------"
	@cd "WhileLoops" && "$(MAKE)" -f  "WhileLoops.mk"
clean:
	@echo "----------Cleaning project:[ WhileLoops - Debug ]----------"
	@cd "WhileLoops" && "$(MAKE)" -f  "WhileLoops.mk" clean
