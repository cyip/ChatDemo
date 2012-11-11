//
//  chatCell.h
//  ChatDemo
//
//  Created by chris on 2012-11-10.
//  Copyright (c) 2012 chris. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface chatCell : UITableViewCell
{
    IBOutlet UILabel *userLabel;
    IBOutlet UITextView *textString;
    IBOutlet UILabel *timeLabel;
}
@property (nonatomic,retain) IBOutlet UILabel *userLabel;
@property (nonatomic,retain) IBOutlet UITextView *textString;
@property (nonatomic,retain) IBOutlet UILabel *timeLabel;

@end
