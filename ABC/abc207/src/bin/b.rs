use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        a: u64,
        b: u64,
        c: u64,
        d: u64
    }
    let mut r = 0;
    let mut l = a;
    let mut ans = 0;
    while l > r * d {
        r += c;
        l += b;
        ans += 1;
        if ans > 1000000 {
            ans = -1;
            break;
        }
    }
    println!("{}", ans);
}
