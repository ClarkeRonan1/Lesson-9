.PHONY: clean All

All:
	@echo "----------Building project:[ VectorPairingChallenge - Debug ]----------"
	@cd "VectorPairingChallenge" && "$(MAKE)" -f  "VectorPairingChallenge.mk"
clean:
	@echo "----------Cleaning project:[ VectorPairingChallenge - Debug ]----------"
	@cd "VectorPairingChallenge" && "$(MAKE)" -f  "VectorPairingChallenge.mk" clean
