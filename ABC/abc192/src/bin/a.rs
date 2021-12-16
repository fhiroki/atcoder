use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        x: u32
    }
    let mut ans = 100 - x % 100;
    if ans == 0 {
        ans = 100;
    }
    println!("{}", ans);
}
