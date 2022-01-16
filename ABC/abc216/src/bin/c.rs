use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        mut n: u64
    }
    let mut ans = String::from("");
    while n > 0 {
        if n % 2 == 0 {
            n /= 2;
            ans.insert(0, 'B');
        } else {
            n -= 1;
            ans.insert(0, 'A');
        }
    }
    println!("{}", ans);
}
