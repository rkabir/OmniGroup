// Copyright 1997-2005 Omni Development, Inc.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <OWF/OWAbstractContent.h>

@class NSDate;
@class OWAddress, OWContentCache, OWContentType;

@interface OWTimeStamp : OWAbstractContent
{
    NSDate *date;
    OWContentType *type;
}

+ (OWContentType *)lastChangedContentType;
+ (NSDate *)dateForAddress:(OWAddress *)address;

- initWithDate:(NSDate *)aDate contentType:(OWContentType *)dateType;
- (NSDate *)date;

@end

