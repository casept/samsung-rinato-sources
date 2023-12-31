#!/usr/bin/python

import unittest
from test import test_support
import smtplib

test_support.requires("network")

class SmtpSSLTest(unittest.TestCase):
    testServer = 'smtp.gmail.com'
    remotePort = 465

    def test_connect(self):
        test_support.get_attribute(smtplib, 'SMTP_SSL')
        with test_support.transient_internet(self.testServer):
            server = smtplib.SMTP_SSL(self.testServer, self.remotePort)
        server.ehlo()
        server.quit()

def test_main():
    test_support.run_unittest(SmtpSSLTest)

if __name__ == "__main__":
    test_main()
