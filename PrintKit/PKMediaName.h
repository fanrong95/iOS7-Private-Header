/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



@interface PKMediaName : NSObject

{

    int _units;

    NSString *_mediaName;

    NSString *_mediaClass;

    NSString *_baseName;

    double _widthInUnits;

    double _heightInUnits;

    NSString *_widthStr;

    double _conversionFactor;

}



+ (id)pkMediaNameWithString:(id)arg1;

@property(retain) NSString *baseName; // @synthesize baseName=_baseName;

@property double conversionFactor; // @synthesize conversionFactor=_conversionFactor;

- (void)dealloc;

@property(readonly) double height; // @dynamic height;

@property double heightInUnits; // @synthesize heightInUnits=_heightInUnits;

- (id)initWithString:(id)arg1;

@property(readonly) _Bool isRoll; // @dynamic isRoll;

@property(retain) NSString *mediaClass; // @synthesize mediaClass=_mediaClass;

@property(retain) NSString *mediaName; // @synthesize mediaName=_mediaName;

- (void)parseMediaName:(id)arg1;

@property int units; // @synthesize units=_units;

@property double widthInUnits; // @synthesize widthInUnits=_widthInUnits;

@property(retain) NSString *widthStr; // @synthesize widthStr=_widthStr;

@property(readonly) NSString *unitStr; // @dynamic unitStr;

@property(readonly) double width; // @dynamic width;



@end


