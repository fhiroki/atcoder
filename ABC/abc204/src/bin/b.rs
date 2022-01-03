use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        a: [u32; n]
    }
    let mut ans = 0;
    for i in 0..n {
        ans += a[i].checked_sub(10).unwrap_or(0);
    }
    println!("{}", ans);
}
