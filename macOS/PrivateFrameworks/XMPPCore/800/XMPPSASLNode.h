//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XMPPCore/XMPPNode.h>

@class NSMutableArray, NSString;

@interface XMPPSASLNode : XMPPNode
{
    int _result;
    long long _error;
    NSString *_resultString;
    NSMutableArray *_mechanisms;
}

- (BOOL)shouldNotifyDelegate;
- (id)resultString;
- (long long)saslError;
- (int)result;
- (id)mechanisms;
- (id)newChildWithName:(id)arg1 attributes:(id)arg2;
- (void)addText:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 attributes:(id)arg2;

@end

