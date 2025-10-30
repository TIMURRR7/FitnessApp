#ifndef MEALFORMULA_HPP
#define MEALFORMULA_HPP

#include <string>
#include <list>
#include "ProfileManager.hpp" 

// ����� MealFormula: ������ �����
class MealFormula {
public:
    // �����������: �������������� ������
    MealFormula(const std::string& id, const std::string& dishName, const std::list<std::string>& componentList,
        const std::string& nutritionPerPortion, int prepTimeMin);

    // ����������
    ~MealFormula();

    // �����: ������������� ��������� �� ������ 
    std::string adjustPortions(double portionFactor) const;

    // �����: ��������� ������������ ������������� ������������
    bool fitsUserPrefs(const ProfileManager& user) const;

private:
    std::string id; // �������������
    std::string dishName; // �������� �����
    std::list<std::string> componentList; // �����������
    std::string nutritionPerPortion; // ��������� �� ������
    int prepTimeMin; // ����� ������������� � �������
};

#endif
