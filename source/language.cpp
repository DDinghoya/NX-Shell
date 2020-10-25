#include <switch.h>

#include "language.h"

// TODO: Japanese
static const char *strings_jp[] {
    "OK",
    "Cancel",

    "Options",
    "Select All",
    "Clear All",
    "Properties",
    "Rename",
    "New Folder",
    "New File",
    "Copy",
    "Move",
    "Paste",
    "Delete",
    "Set Archive Bit",
    "Enter name",
    "Enter folder name",
    "Enter file name",
    "Copying:",

    "Name: ",
    "Size: ",
    "Created: ",
    "Modified: ",
    "Accessed: ",
    "Width: ",
    "Height: ",

    "This action cannot be undone.",
    "Do you wish to delete the following:",
    "Do you wish to delete ",

    "Extract archive",
    "This action may take a while.",
    "Do you wish to extract ",
    "Extracting:",

    "Settings",
    "Sort Settings",
    "Language",
    "Image Viewer",
    "Developer Options",
    "About",
    "Check for Updates",
    " By name (ascending)",
    " By name (descending)",
    " By size (largest first)",
    " By size (smallest first)",
    " Display filename",
    " Enable logs",
    "version",
    "Author",
    "Banner",

    "Update",
    "Could not connect to network.",
    "An update is available.",
    "Do you wish to download and install NX-Shell version ",
    "Update was successful.",
    "Please exit and rerun the application.",
    "You are on the latest version."
};

static const char *strings_en[] {
    "OK",
    "Cancel",

    "Options",
    "Select All",
    "Clear All",
    "Properties",
    "Rename",
    "New Folder",
    "New File",
    "Copy",
    "Move",
    "Paste",
    "Delete",
    "Set Archive Bit",
    "Enter name",
    "Enter folder name",
    "Enter file name",
    "Copying:",

    "Name: ",
    "Size: ",
    "Created: ",
    "Modified: ",
    "Accessed: ",
    "Width: ",
    "Height: ",

    "This action cannot be undone.",
    "Do you wish to delete the following:",
    "Do you wish to delete ",

    "Extract archive",
    "This action may take a while.",
    "Do you wish to extract ",
    "Extracting:",

    "Settings",
    "Sort Settings",
    "Language",
    "Image Viewer",
    "Developer Options",
    "About",
    "Check for Updates",
    " By name (ascending)",
    " By name (descending)",
    " By size (largest first)",
    " By size (smallest first)",
    " Display filename",
    " Enable logs",
    "version",
    "Author",
    "Banner",

    "Update",
    "Could not connect to network.",
    "An update is available.",
    "Do you wish to download and install NX-Shell version ",
    "Update was successful.",
    "Please exit and rerun the application.",
    "You are on the latest version."
};

// TODO: French
static const char *strings_fr[] {
    "OK",
    "Cancel",

    "Options",
    "Select All",
    "Clear All",
    "Properties",
    "Rename",
    "New Folder",
    "New File",
    "Copy",
    "Move",
    "Paste",
    "Delete",
    "Set Archive Bit",
    "Enter name",
    "Enter folder name",
    "Enter file name",
    "Copying:",

    "Name: ",
    "Size: ",
    "Created: ",
    "Modified: ",
    "Accessed: ",
    "Width: ",
    "Height: ",

    "This action cannot be undone.",
    "Do you wish to delete the following:",
    "Do you wish to delete ",

    "Extract archive",
    "This action may take a while.",
    "Do you wish to extract ",
    "Extracting:",

    "Settings",
    "Sort Settings",
    "Language",
    "Image Viewer",
    "Developer Options",
    "About",
    "Check for Updates",
    " By name (ascending)",
    " By name (descending)",
    " By size (largest first)",
    " By size (smallest first)",
    " Display filename",
    " Enable logs",
    "version",
    "Author",
    "Banner",

    "Update",
    "Could not connect to network.",
    "An update is available.",
    "Do you wish to download and install NX-Shell version ",
    "Update was successful.",
    "Please exit and rerun the application.",
    "You are on the latest version."
};

// TODO: German
static const char *strings_de[] {
    "OK",
    "Cancel",

    "Options",
    "Select All",
    "Clear All",
    "Properties",
    "Rename",
    "New Folder",
    "New File",
    "Copy",
    "Move",
    "Paste",
    "Delete",
    "Set Archive Bit",
    "Enter name",
    "Enter folder name",
    "Enter file name",
    "Copying:",

    "Name: ",
    "Size: ",
    "Created: ",
    "Modified: ",
    "Accessed: ",
    "Width: ",
    "Height: ",

    "This action cannot be undone.",
    "Do you wish to delete the following:",
    "Do you wish to delete ",

    "Extract archive",
    "This action may take a while.",
    "Do you wish to extract ",
    "Extracting:",

    "Settings",
    "Sort Settings",
    "Language",
    "Image Viewer",
    "Developer Options",
    "About",
    "Check for Updates",
    " By name (ascending)",
    " By name (descending)",
    " By size (largest first)",
    " By size (smallest first)",
    " Display filename",
    " Enable logs",
    "version",
    "Author",
    "Banner",

    "Update",
    "Could not connect to network.",
    "An update is available.",
    "Do you wish to download and install NX-Shell version ",
    "Update was successful.",
    "Please exit and rerun the application.",
    "You are on the latest version."
};

// TODO: Italian
static const char *strings_it[] {
    "OK",
    "Cancel",

    "Options",
    "Select All",
    "Clear All",
    "Properties",
    "Rename",
    "New Folder",
    "New File",
    "Copy",
    "Move",
    "Paste",
    "Delete",
    "Set Archive Bit",
    "Enter name",
    "Enter folder name",
    "Enter file name",
    "Copying:",

    "Name: ",
    "Size: ",
    "Created: ",
    "Modified: ",
    "Accessed: ",
    "Width: ",
    "Height: ",

    "This action cannot be undone.",
    "Do you wish to delete the following:",
    "Do you wish to delete ",

    "Extract archive",
    "This action may take a while.",
    "Do you wish to extract ",
    "Extracting:",

    "Settings",
    "Sort Settings",
    "Language",
    "Image Viewer",
    "Developer Options",
    "About",
    "Check for Updates",
    " By name (ascending)",
    " By name (descending)",
    " By size (largest first)",
    " By size (smallest first)",
    " Display filename",
    " Enable logs",
    "version",
    "Author",
    "Banner",

    "Update",
    "Could not connect to network.",
    "An update is available.",
    "Do you wish to download and install NX-Shell version ",
    "Update was successful.",
    "Please exit and rerun the application.",
    "You are on the latest version."
};

// TODO: Spanish
static const char *strings_es[] {
    "OK",
    "Cancel",

    "Options",
    "Select All",
    "Clear All",
    "Properties",
    "Rename",
    "New Folder",
    "New File",
    "Copy",
    "Move",
    "Paste",
    "Delete",
    "Set Archive Bit",
    "Enter name",
    "Enter folder name",
    "Enter file name",
    "Copying:",

    "Name: ",
    "Size: ",
    "Created: ",
    "Modified: ",
    "Accessed: ",
    "Width: ",
    "Height: ",

    "This action cannot be undone.",
    "Do you wish to delete the following:",
    "Do you wish to delete ",

    "Extract archive",
    "This action may take a while.",
    "Do you wish to extract ",
    "Extracting:",

    "Settings",
    "Sort Settings",
    "Language",
    "Image Viewer",
    "Developer Options",
    "About",
    "Check for Updates",
    " By name (ascending)",
    " By name (descending)",
    " By size (largest first)",
    " By size (smallest first)",
    " Display filename",
    " Enable logs",
    "version",
    "Author",
    "Banner",

    "Update",
    "Could not connect to network.",
    "An update is available.",
    "Do you wish to download and install NX-Shell version ",
    "Update was successful.",
    "Please exit and rerun the application.",
    "You are on the latest version."
};

// TODO: Simplified Chinese ("Chinese")
static const char *strings_sc[] {
    "OK",
    "Cancel",

    "Options",
    "Select All",
    "Clear All",
    "Properties",
    "Rename",
    "New Folder",
    "New File",
    "Copy",
    "Move",
    "Paste",
    "Delete",
    "Set Archive Bit",
    "Enter name",
    "Enter folder name",
    "Enter file name",
    "Copying:",

    "Name: ",
    "Size: ",
    "Created: ",
    "Modified: ",
    "Accessed: ",
    "Width: ",
    "Height: ",

    "This action cannot be undone.",
    "Do you wish to delete the following:",
    "Do you wish to delete ",

    "Extract archive",
    "This action may take a while.",
    "Do you wish to extract ",
    "Extracting:",

    "Settings",
    "Sort Settings",
    "Language",
    "Image Viewer",
    "Developer Options",
    "About",
    "Check for Updates",
    " By name (ascending)",
    " By name (descending)",
    " By size (largest first)",
    " By size (smallest first)",
    " Display filename",
    " Enable logs",
    "version",
    "Author",
    "Banner",

    "Update",
    "Could not connect to network.",
    "An update is available.",
    "Do you wish to download and install NX-Shell version ",
    "Update was successful.",
    "Please exit and rerun the application.",
    "You are on the latest version."
};

// TODO: Korean
static const char *strings_ko[] {
    "OK",
    "Cancel",

    "Options",
    "Select All",
    "Clear All",
    "Properties",
    "Rename",
    "New Folder",
    "New File",
    "Copy",
    "Move",
    "Paste",
    "Delete",
    "Set Archive Bit",
    "Enter name",
    "Enter folder name",
    "Enter file name",
    "Copying:",

    "Name: ",
    "Size: ",
    "Created: ",
    "Modified: ",
    "Accessed: ",
    "Width: ",
    "Height: ",

    "This action cannot be undone.",
    "Do you wish to delete the following:",
    "Do you wish to delete ",

    "Extract archive",
    "This action may take a while.",
    "Do you wish to extract ",
    "Extracting:",

    "Settings",
    "Sort Settings",
    "Language",
    "Image Viewer",
    "Developer Options",
    "About",
    "Check for Updates",
    " By name (ascending)",
    " By name (descending)",
    " By size (largest first)",
    " By size (smallest first)",
    " Display filename",
    " Enable logs",
    "version",
    "Author",
    "Banner",

    "Update",
    "Could not connect to network.",
    "An update is available.",
    "Do you wish to download and install NX-Shell version ",
    "Update was successful.",
    "Please exit and rerun the application.",
    "You are on the latest version."
};

// TODO: Dutch
static const char *strings_nl[] {
    "OK",
    "Cancel",

    "Options",
    "Select All",
    "Clear All",
    "Properties",
    "Rename",
    "New Folder",
    "New File",
    "Copy",
    "Move",
    "Paste",
    "Delete",
    "Set Archive Bit",
    "Enter name",
    "Enter folder name",
    "Enter file name",
    "Copying:",

    "Name: ",
    "Size: ",
    "Created: ",
    "Modified: ",
    "Accessed: ",
    "Width: ",
    "Height: ",

    "This action cannot be undone.",
    "Do you wish to delete the following:",
    "Do you wish to delete ",

    "Extract archive",
    "This action may take a while.",
    "Do you wish to extract ",
    "Extracting:",

    "Settings",
    "Sort Settings",
    "Language",
    "Image Viewer",
    "Developer Options",
    "About",
    "Check for Updates",
    " By name (ascending)",
    " By name (descending)",
    " By size (largest first)",
    " By size (smallest first)",
    " Display filename",
    " Enable logs",
    "version",
    "Author",
    "Banner",

    "Update",
    "Could not connect to network.",
    "An update is available.",
    "Do you wish to download and install NX-Shell version ",
    "Update was successful.",
    "Please exit and rerun the application.",
    "You are on the latest version."
};

// TODO: Portuguese
static const char *strings_pt[] {
    "OK",
    "Cancel",

    "Options",
    "Select All",
    "Clear All",
    "Properties",
    "Rename",
    "New Folder",
    "New File",
    "Copy",
    "Move",
    "Paste",
    "Delete",
    "Set Archive Bit",
    "Enter name",
    "Enter folder name",
    "Enter file name",
    "Copying:",

    "Name: ",
    "Size: ",
    "Created: ",
    "Modified: ",
    "Accessed: ",
    "Width: ",
    "Height: ",

    "This action cannot be undone.",
    "Do you wish to delete the following:",
    "Do you wish to delete ",

    "Extract archive",
    "This action may take a while.",
    "Do you wish to extract ",
    "Extracting:",

    "Settings",
    "Sort Settings",
    "Language",
    "Image Viewer",
    "Developer Options",
    "About",
    "Check for Updates",
    " By name (ascending)",
    " By name (descending)",
    " By size (largest first)",
    " By size (smallest first)",
    " Display filename",
    " Enable logs",
    "version",
    "Author",
    "Banner",

    "Update",
    "Could not connect to network.",
    "An update is available.",
    "Do you wish to download and install NX-Shell version ",
    "Update was successful.",
    "Please exit and rerun the application.",
    "You are on the latest version."
};

// TODO: Russian
static const char *strings_ru[] {
    "OK",
    "Cancel",

    "Options",
    "Select All",
    "Clear All",
    "Properties",
    "Rename",
    "New Folder",
    "New File",
    "Copy",
    "Move",
    "Paste",
    "Delete",
    "Set Archive Bit",
    "Enter name",
    "Enter folder name",
    "Enter file name",
    "Copying:",

    "Name: ",
    "Size: ",
    "Created: ",
    "Modified: ",
    "Accessed: ",
    "Width: ",
    "Height: ",

    "This action cannot be undone.",
    "Do you wish to delete the following:",
    "Do you wish to delete ",

    "Extract archive",
    "This action may take a while.",
    "Do you wish to extract ",
    "Extracting:",

    "Settings",
    "Sort Settings",
    "Language",
    "Image Viewer",
    "Developer Options",
    "About",
    "Check for Updates",
    " By name (ascending)",
    " By name (descending)",
    " By size (largest first)",
    " By size (smallest first)",
    " Display filename",
    " Enable logs",
    "version",
    "Author",
    "Banner",

    "Update",
    "Could not connect to network.",
    "An update is available.",
    "Do you wish to download and install NX-Shell version ",
    "Update was successful.",
    "Please exit and rerun the application.",
    "You are on the latest version."
};

// TODO: Traditional Chinese ("Taiwanese")
static const char *strings_tw[] {
    "OK",
    "Cancel",

    "Options",
    "Select All",
    "Clear All",
    "Properties",
    "Rename",
    "New Folder",
    "New File",
    "Copy",
    "Move",
    "Paste",
    "Delete",
    "Set Archive Bit",
    "Enter name",
    "Enter folder name",
    "Enter file name",
    "Copying:",

    "Name: ",
    "Size: ",
    "Created: ",
    "Modified: ",
    "Accessed: ",
    "Width: ",
    "Height: ",

    "This action cannot be undone.",
    "Do you wish to delete the following:",
    "Do you wish to delete ",

    "Extract archive",
    "This action may take a while.",
    "Do you wish to extract ",
    "Extracting:",

    "Settings",
    "Sort Settings",
    "Language",
    "Image Viewer",
    "Developer Options",
    "About",
    "Check for Updates",
    " By name (ascending)",
    " By name (descending)",
    " By size (largest first)",
    " By size (smallest first)",
    " Display filename",
    " Enable logs",
    "version",
    "Author",
    "Banner",

    "Update",
    "Could not connect to network.",
    "An update is available.",
    "Do you wish to download and install NX-Shell version ",
    "Update was successful.",
    "Please exit and rerun the application.",
    "You are on the latest version."
};

const char **strings[Lang::Max] = {
    strings_jp,
    strings_en,
    strings_fr,
    strings_de,
    strings_it,
    strings_es,
    strings_sc,
    strings_ko,
    strings_nl,
    strings_pt,
    strings_ru,
    strings_tw
};