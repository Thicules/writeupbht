# **WRITEUP BHT**
## I)Tổng quan.
  Đây là những kiến thức mình học được khi tham gia Ban học tập đoàn Khoa mạng máy tính và truyền thông, trường Đại học Công nghệ thông tin</p>
## II) Chi Tiết
## 1) Lưu đồ thuật toán.
Vẽ được lưu đồ thuật toán cho các bài toán đơn giản.</p>
*Các hình ký hiệu cơ bản trong lưu đồ thuật toán: </p>
![image](https://user-images.githubusercontent.com/93419631/140007015-ea1f97b5-d325-4dfd-a766-5dfbb9dbcf72.png)</p>
## 2) Recode #1.
  <cau1>![image](https://user-images.githubusercontent.com/93419631/139905083-51da9c84-73fd-4fcf-a030-90085d883e7d.png)</p>
  **Code:** </p>
  ```
  #include <iostream>
using namespace std;

int main(){
    int x,x2,x5,x11;
    cin>>x;
    x2=x*x;
    x5=x2*x2*x;
    x11=x5*x5*x;
    cout<<x11;
    return 0;
}
```
  Hướng làm:</p>
- Muốn có x^11ta phải lấy đươc x^5 -> x^2 </p>
- Để biết được ta cần lấy những số nào ta sẽ chia cho 2:</p>
  VD: 11\2= 5 dư 1, 5\2=2 dư 2\2=1 dư 0 chia cho đến khi dư 0, khoảng ngoài để biết số phép dư tối thiểu sẽ là số phép chia và số phép chia có dư cộng lại.</p>
  **Câu 2** Tính tổng các chữ số cúa số nguyên n.</p>
  **Code:** </p>
``
#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>s;
    n=0;
    for (int i=0;i<s.size();++i){
        n=n+(s[i]-'0');
    }
    cout<<n;
    return 0;
}
```
  *Ý tưởng:</p>
 - Ta sẽ cho số nguyên n là một string, sau đó là cộng giá trị của kí tự trong string đó lại với nhau (đưa về số thứ trong trong ASCII trừ số thứ tự ‘0’ trong ASCII).</p>
 - Ngoài ra còn có thể dùng cách khác đó là chia lấy dư cho 10 để làm.</p>
 ![image](https://user-images.githubusercontent.com/93419631/139914060-3bd71c5b-72df-4bb4-8fca-9a18333b3866.png)</p> <cau3>
**Code:** </p>
Hướng làm:</p>
- Sử dụng biến num để tính tử, biến den để tính mẫu và dùng biến s để tính tổng.</p>
- Sau đó cho vòng lặp để chạy từ 1 đến n, mỗi lần lặp cho biến num nhân thêm x và biến den cộng thêm, tiếp đó tính tổng s=s+num/den.</p>
<Cau4>![image](https://user-images.githubusercontent.com/93419631/140007121-6a6c7f26-36aa-4979-88c4-41f59939b665.png) </p>
Hướng làm:</p>
- Ta nhận thấy sau mỗi số hạng thì nhân thêm x2  và sẽ đan dấu với nhau. </p>
- Ta dùng biến s để tính tổng các số hạng, biến t tính mỗi số hạng i.</p>
- Để tiết kiệm số phép tính nhân đầu tiên sẽ tính x2(x=x*x) trước.</p>
- Để các số hạng đổi đẩu dấu sau mỗi lần lặp ta sẽ nhân với (-1) [t=t*x*(-1)].</p>
- Cuói cùng ta sẽ tính tổng s (s=s+t).</p>
<Cau5>![image](https://user-images.githubusercontent.com/93419631/140030913-aacd626c-a3fd-4cd2-bfc9-c65f874d7b66.png)</p>
**Code:** </p>
Hướng làm:</p>
- Nhận thấy sau mỗi lần căn mũ của x sẽ lên 1 đơn vị.</p>
- Ta sẽ tính căn từ trong ra ngoài. Dùng biến biến s để tính tổng, biến t để tính x^i.</p>
(Bài này để tính căn bậc 2 sẽ sử dụng hàm sqrt bằng cách sài thư viện <math.h>).</p>
<Cau6>![image](https://user-images.githubusercontent.com/93419631/140033120-48af12ac-cb02-409b-b559-39c0cfd419bb.png)</p>
**Code:** </p>
Hướng làm:</p>
- Đầu tiên một tổng có độ chính xác 10^-6  là gì? Một tổng có độ chính xác 10^-6 là số hạng nhỏ nhất trong tổng đó sẽ >=10-6 sẽ chính xác đến  6 số thập phân không chính xác hơn hơn 6 số thập phân.</p>
- Vì vậy ta dùng một hàng số e=10^-6 để so sánh độ chính xác, dùng biến s để lưu cái tổng đó, ta sẽ tính s=s+1/i cho đến khi 1/i nhỏ hơn e (Trong phần dùng code dùng 1.0/i để ép kiểu số thực).</p>
- Trong phần code còn sử dụng hàm setprecision trong thư viện < iomanip > đẻ hiện được 6 số thập phân.</p>










	





