//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSByteCountFormatter, NSString;

@interface SMSizeFormatter : NSFormatter
{
    NSString *_formatString;
    NSByteCountFormatter *_numberFormatter;
}

@property(retain) NSByteCountFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(retain) NSString *formatString; // @synthesize formatString=_formatString;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)arg1;
- (id)initWithPrefixString:(id)arg1 localeIdentifier:(id)arg2;

@end

