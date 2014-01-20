/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSSecureCoding.h"



@class NSString;



@interface AFSpeechCorrectionInfo : NSObject <NSSecureCoding>

{

    long long _alternativeSelectionCount;

    long long _characterModificationCount;

    NSString *_correctedText;

}



+ (_Bool)supportsSecureCoding;

- (void).cxx_destruct;

@property(nonatomic) long long alternativeSelectionCount; // @synthesize alternativeSelectionCount=_alternativeSelectionCount;

@property(nonatomic) long long characterModificationCount; // @synthesize characterModificationCount=_characterModificationCount;

@property(copy, nonatomic) NSString *correctedText; // @synthesize correctedText=_correctedText;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;



@end


