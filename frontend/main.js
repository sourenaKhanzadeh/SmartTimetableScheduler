const {app, BrowserWindow} = require('electron');
const path = require('path');

function createMainWindow(){
    const win = new BrowserWindow({
        width: 800,
        height: 600,
        webPreferences: {
            nodeIntegration: true
        },
        title: 'Smart Timetable Scheduler'
    });

    win.loadFile(path.join(__dirname, './renderer/index.html'));
}

app.whenReady().then(() => {
    createMainWindow();
});
