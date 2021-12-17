use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        a: f32,
        b: f32,
    }
    println!("{}", 100.0 - b * 100.0 / a);
}
