/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableString, NSString;



__attribute__((visibility("hidden")))

@interface EMNumberFormatter : NSObject

{

    struct __CFNumberFormatter *mGenericFormatter;

    struct __CFNumberFormatter *mBigNumberFormatter;

    struct __CFNumberFormatter *mSmallNumberFormatter;

    struct __CFDateFormatter *mDateFormatter;

    struct __CFNumberFormatter *mCurrencyFormatter;

    NSString *excelFormatString;

    NSMutableString *icuFormatString;

    _Bool mIsNegativeRed;

    unsigned short mCurrencySymbol;

    int formatType;

}



+ (id)formatterForFormat:(id)arg1;

+ (void)initFormatterCache;

+ (void)releaseFormatterCache;

- (struct __CFNumberFormatter *)_bigNumberFormatter;

- (struct __CFNumberFormatter *)_currencyFormatter;

- (struct __CFDateFormatter *)_dateFormatter;

- (struct __CFNumberFormatter *)_genericFormatter;

- (struct __CFNumberFormatter *)_genericFormatterForDouble;

- (struct __CFNumberFormatter *)_genericFormatterForPercent;

- (struct __CFNumberFormatter *)_smallNumberFormatter;

- (void)convertCurrencyFormat;

- (void)convertDateFormat;

- (void)convertGenericNumberFormat;

- (void)dealloc;

- (id)formatCurrency:(double)arg1;

- (id)formatDate:(id)arg1;

- (id)formatDefault:(double)arg1;

- (id)formatDoubleValue:(double)arg1;

- (id)formatFraction:(double)arg1;

- (id)formatPercent:(double)arg1;

- (id)formatPhoneNumber:(double)arg1;

- (int)formatType;

- (id)icuFormatString;

- (id)initWithDefaultFormatString;

- (id)initWithExcelFormatString:(id)arg1;

- (_Bool)isNegativeRed;

- (void)preprocessIcuString;



@end


