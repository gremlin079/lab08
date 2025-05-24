#include "formatter_ex.h"

#include "formatter.h"

void formatter(std::ostream& out, const std::string& text) {
    out << text << std::endl;
    
    const char* log_path = std::getenv("LOG_PATH");
    if (log_path) {
        std::ofstream log_file(log_path, std::ios::app);
        if (log_file.is_open()) {
            log_file << text << std::endl;
        }
    }
}
