const { contextBridge, shell } = require('electron');

contextBridge.exposeInMainWorld('versions', {
    node: () => process.versions.node,
    chrome: () => process.versions.chrome,
    electron: () => process.versions.electron
}
);

contextBridge.exposeInMainWorld('openLink', {
    open: (url) => shell.openExternal(url)
}
);