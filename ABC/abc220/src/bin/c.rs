use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        a: [u64; n],
        mut x: u64
    }
    let sum: u64 = a.iter().sum();
    let mut ans = x / sum * n as u64;
    x -= x / sum * sum;
    for i in 0..n {
        ans += 1;
        match x.checked_sub(a[i]) {
            Some(y) => x = y,
            None => break,
        }
    }
    println!("{}", ans);
}
