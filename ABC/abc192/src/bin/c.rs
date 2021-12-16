use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        mut n: u32,
        k: u32
    }

    for _ in 0..k {
        let mut chars: Vec<char> = n.to_string().chars().collect();
        chars.sort();
        let g2: u32 = chars.iter().collect::<String>().parse().unwrap();
        chars.reverse();
        let g1: u32 = chars.iter().collect::<String>().parse().unwrap();
        n = g1 - g2;
    }
    println!("{}", n);
}
