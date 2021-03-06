//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKPaymentSetupField.h>

@class NSString;

@interface PKPaymentSetupFieldText : PKPaymentSetupField
{
    BOOL _secureText;
    BOOL _secureVisibleText;
    BOOL _numeric;
    BOOL _luhnCheck;
    unsigned long long _minLength;
    unsigned long long _maxLength;
    NSString *_displayFormatPlaceholder;
}

@property(copy, nonatomic) NSString *displayFormatPlaceholder; // @synthesize displayFormatPlaceholder=_displayFormatPlaceholder;
@property(nonatomic, getter=useLuhnCheck) BOOL luhnCheck; // @synthesize luhnCheck=_luhnCheck;
@property(nonatomic, getter=isNumeric) BOOL numeric; // @synthesize numeric=_numeric;
@property(nonatomic, getter=isSecureVisibleText) BOOL secureVisibleText; // @synthesize secureVisibleText=_secureVisibleText;
@property(nonatomic, getter=isSecureText) BOOL secureText; // @synthesize secureText=_secureText;
@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) unsigned long long minLength; // @synthesize minLength=_minLength;
- (void).cxx_destruct;
- (unsigned long long)fieldType;
- (void)updateWithConfiguration:(id)arg1;
- (id)displayFormatPaddingPrefix;
- (void)updateDisplayFormat:(id)arg1;
- (id)displayFormatPaddingCharacters;
- (id)stringByApplyingDisplayFormat:(id)arg1;
- (BOOL)hasDisplayFormat;
- (BOOL)submissionStringMeetsAllRequirements;
- (id)submissionString;
- (id)displayString;
- (void)setCurrentValue:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;

@end

