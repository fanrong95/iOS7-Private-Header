/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface EBConditionalFormat : NSObject

{

}



+ (int)convertEDConditionalFmtOperatorEnumToXl:(int)arg1;

+ (int)convertEDConditionalFmtTypeEnumToXl:(int)arg1;

+ (void)convertTokensToSharedTokens:(id)arg1;

+ (int)convertXlConditionalFmtOperatorEnumToED:(int)arg1;

+ (int)convertXlConditionalFmtTypeEnumToED:(int)arg1;

+ (void)readXlConditionalFormat:(struct XlConditionalFormat *)arg1 toEDConditionalFormatting:(id)arg2 state:(id)arg3;

+ (_Bool)validXlCf:(struct XlCf *)arg1;



@end


