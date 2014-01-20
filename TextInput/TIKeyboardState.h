/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSSecureCoding.h"



@class NSString, TIDocumentState, TIKeyboardCandidate, TIKeyboardLayout, TIKeyboardLayoutState;



@interface TIKeyboardState : NSObject <NSCopying, NSSecureCoding>

{

    union {

        long long integerValue;

        struct {

            unsigned int userSelectedCurrentCandidate:1;

            unsigned int shouldSkipCandidateSelection:1;

            unsigned int suppressingCandidateSelection:1;

            unsigned int needsCandidateMetadata:1;

            unsigned int keyboardEventsLagging:1;

            unsigned int hardwareKeyboardMode:1;

            unsigned int splitKeyboardMode:1;

            unsigned int wordLearningEnabled:1;

            unsigned int autocorrectionEnabled:1;

            unsigned int shortcutConversionEnabled:1;

            unsigned int typologyLoggingEnabled:1;

            unsigned int autocapitalizationEnabled:1;

            unsigned int autocapitalizationType:2;

            unsigned int keyboardType:4;

        } fields;

    } _mask;

    NSString *_inputMode;

    TIKeyboardLayout *_keyLayout;

    TIKeyboardLayoutState *_layoutState;

    TIDocumentState *_documentState;

    NSString *_inputForMarkedText;

    NSString *_searchStringForMarkedText;

    TIKeyboardCandidate *_currentCandidate;

}



+ (_Bool)supportsSecureCoding;

@property(nonatomic) _Bool autocapitalizationEnabled;

@property(nonatomic) unsigned long long autocapitalizationType;

@property(nonatomic) _Bool autocorrectionEnabled;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(retain, nonatomic) TIKeyboardCandidate *currentCandidate; // @synthesize currentCandidate=_currentCandidate;

- (void)dealloc;

- (id)description;

@property(retain, nonatomic) TIDocumentState *documentState; // @synthesize documentState=_documentState;

- (void)encodeWithCoder:(id)arg1;

@property(nonatomic) _Bool hardwareKeyboardMode;

- (id)initWithCoder:(id)arg1;

@property(copy, nonatomic) NSString *inputForMarkedText; // @synthesize inputForMarkedText=_inputForMarkedText;

@property(copy, nonatomic) NSString *inputMode; // @synthesize inputMode=_inputMode;

@property(retain, nonatomic) TIKeyboardLayout *keyLayout; // @synthesize keyLayout=_keyLayout;

@property(nonatomic) _Bool keyboardEventsLagging;

@property(nonatomic) unsigned long long keyboardType;

@property(copy, nonatomic) TIKeyboardLayoutState *layoutState; // @synthesize layoutState=_layoutState;

@property(nonatomic) _Bool needsCandidateMetadata;

@property(copy, nonatomic) NSString *searchStringForMarkedText; // @synthesize searchStringForMarkedText=_searchStringForMarkedText;

@property(nonatomic) _Bool shortcutConversionEnabled;

@property(nonatomic) _Bool shouldSkipCandidateSelection;

@property(nonatomic) _Bool splitKeyboardMode;

@property(nonatomic) _Bool suppressingCandidateSelection;

@property(nonatomic) _Bool typologyLoggingEnabled;

@property(nonatomic) _Bool userSelectedCurrentCandidate;

@property(nonatomic) _Bool wordLearningEnabled;



@end


