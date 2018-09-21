.PHONY: clean All

All:
	@echo "----------Building project:[ SwitchStatements - Debug ]----------"
	@cd "SwitchStatements" && "$(MAKE)" -f  "SwitchStatements.mk"
clean:
	@echo "----------Cleaning project:[ SwitchStatements - Debug ]----------"
	@cd "SwitchStatements" && "$(MAKE)" -f  "SwitchStatements.mk" clean
