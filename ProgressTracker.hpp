#ifndef PROGRESSTRACKER_HPP
#define PROGRESSTRACKER_HPP

#include <string>
#include <list>

// ����� ProgressTracker: ������������ ���������
class ProgressTracker {
public:
    // �����������: �������������� ������
    ProgressTracker(const std::string& userId, const std::list<std::pair<std::string, double>>& weightLog,
        const std::list<std::string>& sessionHistory, int activeStreak);

    // ����������: ����������� �������
    ~ProgressTracker();

    // �����: ���������� ��������� ������
    void logSessionOutcome(const std::string& outcome);

    // �����: ������������ ������� ���������� �����
    double calcCompliance(const std::string& interval) const;

private:
    std::string userId; // ������������� ������������
    std::list<std::pair<std::string, double>> weightLog; // ������� ���� (����, ���)
    std::list<std::string> sessionHistory; // ������� ������
    int activeStreak; // ������� �����
};

#endif
