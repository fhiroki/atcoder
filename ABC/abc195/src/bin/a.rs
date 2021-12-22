use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        m: u16,
        h: u16,
    }
    if h % m == 0 {
        println!("Yes");
    } else {
        println!("No");
    }
}
