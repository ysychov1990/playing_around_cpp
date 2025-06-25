.PHONY: clean All

All:
	@echo "----------Building project:[ section_5 - Debug ]----------"
	@cd "section_5" && "$(MAKE)" -f  "section_5.mk"
clean:
	@echo "----------Cleaning project:[ section_5 - Debug ]----------"
	@cd "section_5" && "$(MAKE)" -f  "section_5.mk" clean
