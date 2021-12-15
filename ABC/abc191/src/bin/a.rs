use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        v: f32,
        t: f32,
        s: f32,
        d: f32,
    }
    if d / v >= t && d / v <= s {
        println!("No");
    } else {
        println!("Yes");
    }
}
