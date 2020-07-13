// swift-tools-version:5.2

import PackageDescription

let package = Package(
    name: "CVarArgTest",
    products: [
        .executable(
            name: "CVarArgTest",
            targets: ["CVarArgTest"]),
    ],
    targets: [
        .target(
            name: "CLib"),
        .target(
            name: "CVarArgTest",
            dependencies: ["CLib"])
    ]
)
