#include "MealFormula.hpp"

// �����������: �������������� ����
MealFormula::MealFormula(const std::string& id, const std::string& dishName, const std::list<std::string>& componentList,
    const std::string& nutritionPerPortion, int prepTimeMin)
    : id(id), dishName(dishName), componentList(componentList), nutritionPerPortion(nutritionPerPortion),
    prepTimeMin(prepTimeMin) {}

// ����������: ������
MealFormula::~MealFormula() {}

// �����: �������� ������ (��������)
std::string MealFormula::adjustPortions(double portionFactor) const {
    return "Adjusted"; // ������
}

// �����: �������� ������������ (��������)
bool MealFormula::fitsUserPrefs(const ProfileManager& user) const {
    return true;
}
