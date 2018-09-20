.PHONY: clean All

All:
	@echo "----------Building project:[ NestedIfStatements - Debug ]----------"
	@cd "NestedIfStatements" && "$(MAKE)" -f  "NestedIfStatements.mk"
clean:
	@echo "----------Cleaning project:[ NestedIfStatements - Debug ]----------"
	@cd "NestedIfStatements" && "$(MAKE)" -f  "NestedIfStatements.mk" clean
