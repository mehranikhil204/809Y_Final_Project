.PHONY: clean All

All:
	@echo "----------Building project:[ Final-Project-Group6 - Debug ]----------"
	@cd "Final-Project-Group6" && "$(MAKE)" -f  "Final-Project-Group6.mk"
clean:
	@echo "----------Cleaning project:[ Final-Project-Group6 - Debug ]----------"
	@cd "Final-Project-Group6" && "$(MAKE)" -f  "Final-Project-Group6.mk" clean
