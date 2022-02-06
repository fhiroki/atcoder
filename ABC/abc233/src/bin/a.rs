use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        x: f32,
        y: f32
    }
    println!("{}", ((y - x).max(0.0) / 10.0).ceil());
}
