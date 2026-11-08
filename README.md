# 🔊 WAV Volume Adjuster

### Audio Volume Manipulation Using C

A command-line audio processing program developed in **C**, designed to increase or decrease the volume of WAV audio files using a user-defined scaling factor.

---

## 🌟 Features

- 🔊 **Volume Amplification:** Increase audio volume using a factor greater than `1.0`.
- 🔉 **Volume Reduction:** Decrease audio volume using a factor between `0.0` and `1.0`.
- 🎵 **Original Volume:** Preserve the original volume using a factor of `1.0`.
- 📁 **File Handling:** Read an existing WAV file and generate a modified output file.
- ⚡ **Command-Line Interface:** Process audio files directly through terminal arguments.

## 🛠️ Tech Stack

| Technology | Purpose |
|---|---|
| C | Core programming |
| `stdint.h` | Fixed-width integer types |
| `stdio.h` | File handling |
| `stdlib.h` | Command-line argument processing |

## ⚙️ Getting Started

### 1. Clone the Repository

```bash
git clone https://github.com/YOUR_USERNAME/WAV-Volume-Adjuster.git
```

### 2. Compile the Program

Using GCC:

```bash
gcc volume.c -o wav-volume
```

### 3. Run the Program

```bash
./wav-volume input.wav output.wav factor
```

**Windows (PowerShell):**

```powershell
.\wav-volume.exe input.wav output.wav factor
```

## 🎚️ Usage Examples

| Factor | Result |
|---|---|
| `2.0` | Amplifies volume |
| `1.5` | Increases volume by 50% |
| `0.5` | Reduces volume by 50% |
| `1.0` | Preserves original volume |
| `0.25` | Reduces volume significantly |

### Example

```bash
./wav-volume input.wav output.wav 1.5
```

This generates `output.wav` with the audio samples scaled by a factor of `1.5`.
