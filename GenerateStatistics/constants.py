# FOLDERS

# Folder where all statistics and temporary files are saved. This is the root folder.
FOLDER_SORT_ROOT = "../SortStatistics/"
# Temporary folder, where unsorted and sorted arrays are saved into file.
FOLDER_SORT_TEMP = FOLDER_SORT_ROOT + "SortTemp/"
# Folder, where sort execution times are saved.
FOLDER_SORT_TIMERS = FOLDER_SORT_ROOT + "Time/"
# Folder, where sort correctness statuses are saved.
FOLDER_SORT_CORRECTNESS = FOLDER_SORT_ROOT  + "Correctness/"
# Folder, where sort stability statuses are saved.
FOLDER_SORT_STABILITY = FOLDER_SORT_ROOT + "Stability/"


# FILES

# File extension.
FILE_EXTENSION = ".txt"
# Separator between elements in file.
FILE_SEPARATOR_CHAR = '\t'
# New line character in file
FILE_NEW_LINE_CHAR = '\n'
# File name, where summary of predicates for sort correctness and stability are saved
FILE_SUMMARY = "%s%s" % ("Summary", FILE_EXTENSION)

SORT_KEY_ONLY = "key_only"
SORT_KEY_VALUE = "key_value"