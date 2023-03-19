const {app, BrowserWindow} = require('electron');
const path = require('path');

const isMac = process.platform === 'darwin';
const isDev = process.env.NODE_ENV === 'development';

function createMainWindow(){
    const win = new BrowserWindow({
        width: isDev ? 1000: 800,
        height: 600,
        webPreferences: {
            nodeIntegration: true,
            contextIsolation: true,
            preload: path.join(__dirname, "./renderer/js/preload.js")
        },
        title: 'Smart Timetable Scheduler'
    });
    // open dev tools if in dev mode
    if(isDev){
        win.webContents.openDevTools();
    }
    win.loadFile(path.join(__dirname, './renderer/index.html'));
}

app.whenReady().then(() => {
    createMainWindow();
    app.on('activate', () => {
        if(BrowserWindow.getAllWindows().length === 0){
            createMainWindow();
        }
    });
});

app.on('window-all-closed', () => {
    if(!isMac){
        app.quit();
    }
});

