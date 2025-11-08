#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Hasher {
private:
    // Yêu cầu 1: Khởi tạo h ban đầu bằng số điện thoại
    const ll H_INIT = 84388359002LL; 
    ll p; // Số nguyên tố p
    // Hàm kiểm tra số nguyên tố
    bool check(ll n){
        if(n <= 1) return false;
        for(ll i = 2; i * i <= n; i++){ 
            if(n % i == 0) return false;
        }
        return true;
    }
    // Yêu cầu 2: Hàm sinh ngẫu nhiên số nguyên tố p có 6 chữ số
    ll genP(){
        static random_device rd;
        static mt19937 generator(rd());
        uniform_int_distribution<ll> dis(100000, 999999); 
        ll p;
        do { 
            p = dis(generator);
        } while (!check(p)); 
        return p;
    }

public:
    Hasher() {
        p = genP();
    }
    // Yêu cầu 4: Hàm băm một chiều
    ll bam(const string& input) {
        ll h = H_INIT; // Khởi tạo h bằng SDT ban đầu
        for (char ch: input) { // Duyệt qua từng ký tự 'ch'
            h ^= static_cast<ll>(ch); // Phép toán 1: h = h XOR ch 
            h *= p;  // Phép toán 2: h = h * p 
        }
        return h;
    }
    // Yêu cầu 3: Hàm chuyển h sang hexa
    string toHex(ll h) const {
        stringstream ss;
        ss << hex << uppercase << h;
        return ss.str();
    }
    // Getter để truy xuất số nguyên tố p
    ll getP() const {
        return p;
    }
};

// ----------------------------------------------------------------------
// HÀM MAIN: THỰC THI CHƯƠNG TRÌNH (YÊU CẦU 5)
// ----------------------------------------------------------------------

int main() {
    cout << "--- MO PHONG MA HOA MOT CHIEU (CLASS HASHER) ---" << "\n";
    // 1. Tạo đối tượng Hasher (tự động sinh p)
    Hasher hs;
    // 2. Nhập input từ bàn phím
    string input;
    cout << "Nhap chuoi ky tu (input): ";
    getline(cin, input); 
    // 3. Thực hiện hàm băm
    ll final_h = hs.bam(input);
    // 4. Đưa ra màn hình các giá trị
    cout << "\n===================================================" << "\n";
    cout << "  KET QUA MA HOA" << "\n";
    cout << "===================================================" << "\n";
    // Hiển thị p (lấy từ getter)
    cout << "  So nguyen to p: " << hs.getP() << "\n";
    // Hiển thị h thập phân
    cout << "  Gia tri h (Thap phan): " << final_h << "\n";
    // Hiển thị h hexa (dùng hàm của class)
    cout << "  Gia tri h (Hexa): " << hs.toHex(final_h) << "\n";
    cout << "===================================================" << "\n";
}