use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: u32,
        x: u32,
        a: [u32; n]
    }
    println!(
        "{}",
        a.iter()
            .filter(|&a| *a != x)
            .map(|a| a.to_string())
            .collect::<Vec<String>>()
            .join(" ")
    );
}
