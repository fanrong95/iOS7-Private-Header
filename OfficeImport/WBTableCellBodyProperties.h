/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface WBTableCellBodyProperties : NSObject

{

}



+ (id)formattingChangeDate:(const struct WrdDateTime *)arg1;

+ (void)mapProperties:(id)arg1 toWordProperties:(struct WrdTableProperties *)arg2 index:(unsigned long long)arg3;

+ (void)mapWordProperties:(struct WrdTableProperties *)arg1 toProperties:(id)arg2 index:(unsigned long long)arg3;

+ (void)readFrom:(struct WrdTableProperties *)arg1 tracked:(struct WrdTableProperties *)arg2 properties:(id)arg3 index:(unsigned long long)arg4;

+ (void)write:(id)arg1 wrdProperties:(struct WrdTableProperties *)arg2 tracked:(struct WrdTableProperties *)arg3 index:(unsigned long long)arg4;



@end


