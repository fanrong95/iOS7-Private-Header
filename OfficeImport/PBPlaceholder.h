/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface PBPlaceholder : NSObject

{

}



+ (_Bool)isBodyPlaceholder:(int)arg1;

+ (_Bool)isTitlePlaceholder:(int)arg1;

+ (int)placeholderTypeFromTextType:(int)arg1;

+ (int)readPlaceholderOrientation:(int)arg1;

+ (int)readPlaceholderSize:(int)arg1;

+ (int)readPlaceholderType:(int)arg1;

+ (void)writePlaceholder:(id)arg1 toPlaceholderAtom:(struct PptOEPlaceholderAtom *)arg2 isMaster:(_Bool)arg3 isNotes:(_Bool)arg4;



@end


