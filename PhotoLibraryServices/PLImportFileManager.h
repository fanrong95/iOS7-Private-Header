/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface PLImportFileManager : NSObject

{

}



+ (_Bool)isCameraDirectoryFolderName:(id)arg1;

+ (_Bool)isImportDirectoryFolderName:(id)arg1;

- (id)_DCIMFolderNameWithNumber:(long long)arg1;

- (id)_dcimDirectory;

- (id)nextAvailableFilePathInDirectory:(id)arg1 withExtension:(id)arg2;

- (_Bool)removeUnusedDCIMDirectoryAtPath:(id)arg1;

- (id)urlForNewDCIMFolderWithFolderNumber:(long long *)arg1;



@end


