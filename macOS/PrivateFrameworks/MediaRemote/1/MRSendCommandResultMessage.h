//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRSendCommandResultMessage : MRProtocolMessage
{
    NSArray *_results;
}

@property(readonly, nonatomic) NSArray *results;
@property(readonly, nonatomic) unsigned int sendError;
- (unsigned long long)type;
- (void)dealloc;
- (id)initWithSendError:(unsigned int)arg1 results:(id)arg2;

@end

