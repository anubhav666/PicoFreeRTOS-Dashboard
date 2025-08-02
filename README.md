# 📊 FreeRTOS-Based Raspberry Pi Pico Monitoring Dashboard

This project demonstrates a real-time dashboard built with **Blazor Server** and a **Raspberry Pi Pico** running **FreeRTOS**, simulating internal device data (like temperature and status) and broadcasting it to a live web dashboard.

---

## 🚀 Features

- ⏱️ Real-time updates using **SignalR**
- 🔧 Simulated temperature/status via **FreeRTOS tasks**
- 📈 Live graphing using **Chart.js**
- 🔌 USB Serial (CDC) communication
- 🖥️ Web-based C# dashboard (ASP.NET Core Blazor Server)

---

## 🛠️ Folder Structure

PicoFreeRTOS-Dashboard/
├── 📁 blazor-dashboard/              # C# Blazor Server App
│   ├── Program.cs
│   ├── Pages/
│   ├── Models/
│   ├── Services/
│   ├── Hubs/
│   ├── wwwroot/js/
│   └── ... (.csproj, _Host.cshtml, etc.)
│
├── 📁 pico-freertos/                 # Raspberry Pi Pico FreeRTOS App
│   ├── main.c
│   ├── CMakeLists.txt
│   ├── freertos/                    # Optional: submodule or source copy
│   ├── include/
│   └── build/                       # Ignore in Git
│
├── 📁 docs/                          # Optional: Screenshots, diagrams
│   ├── architecture.png
│   ├── dashboard-preview.png
│   └── serial-setup.png
│
├── .gitignore
├── README.md
└── LICENSE
