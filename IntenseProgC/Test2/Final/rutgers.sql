-- phpMyAdmin SQL Dump
-- version 4.5.4.1
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Aug 14, 2019 at 08:08 PM
-- Server version: 5.7.11
-- PHP Version: 7.0.3

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `rutgers`
--

-- --------------------------------------------------------

--
-- Table structure for table `courses`
--

CREATE TABLE `courses` (
  `course_id` int(10) NOT NULL,
  `course_code` varchar(20) NOT NULL,
  `descript_course` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `courses`
--

INSERT INTO `courses` (`course_id`, `course_code`, `descript_course`) VALUES
(9991, 'CS425', 'Senior project using front-end and back-end development.'),
(9992, 'Math401', 'Calculus III, learn about vectors and complex integrals and derivatives.'),
(9993, 'CS280', 'Learn about behind the scenes of major programming languages.'),
(9999, 'CS288', 'PHP and C programming using Linux commands and mySQL.');

-- --------------------------------------------------------

--
-- Table structure for table `schedules`
--

CREATE TABLE `schedules` (
  `schedule_id` int(10) NOT NULL,
  `student_id` int(10) NOT NULL,
  `course_id` int(10) NOT NULL,
  `schedule_year` int(10) NOT NULL,
  `schedule_semester` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `schedules`
--

INSERT INTO `schedules` (`schedule_id`, `student_id`, `course_id`, `schedule_year`, `schedule_semester`) VALUES
(1, 1112, 9999, 2019, 'Fall'),
(2, 1113, 9991, 2019, 'Spring'),
(3, 1114, 9992, 2019, 'Summer'),
(4, 1115, 9993, 2018, 'Fall'),
(5, 1114, 9992, 2018, 'Fall');

-- --------------------------------------------------------

--
-- Table structure for table `students`
--

CREATE TABLE `students` (
  `student_id` int(10) NOT NULL,
  `firstn` varchar(30) NOT NULL,
  `lastn` varchar(30) NOT NULL,
  `phone` varchar(11) NOT NULL,
  `email` varchar(30) NOT NULL,
  `status` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `students`
--

INSERT INTO `students` (`student_id`, `firstn`, `lastn`, `phone`, `email`, `status`) VALUES
(1112, 'David', 'Bucheli', '9089925727', 'gdb@rutgers.edu', 'active'),
(1113, 'Mathew', 'Bucheli', '9084622010', 'mft@njit.edu', 'active'),
(1114, 'Jenn', 'White', '9081234567', 'jw6@rutgers.edu', 'active'),
(1115, 'Stefy', 'Grey', '7324567890', 'ssg@njit.edu', 'active'),
(1123, 'June', 'White', '9084625511', 'jw@njit.edu', 'inactive'),
(1125, 'May', 'Fonts', '9084652131', 'may@rutgers.edu', 'inactive'),
(1127, 'David', 'Smith', '9745632121', 'frank@njit.edu', 'active');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `courses`
--
ALTER TABLE `courses`
  ADD PRIMARY KEY (`course_id`);

--
-- Indexes for table `schedules`
--
ALTER TABLE `schedules`
  ADD PRIMARY KEY (`schedule_id`),
  ADD KEY `student_id` (`student_id`),
  ADD KEY `course_id` (`course_id`),
  ADD KEY `student_id_2` (`student_id`),
  ADD KEY `course_id_2` (`course_id`);

--
-- Indexes for table `students`
--
ALTER TABLE `students`
  ADD PRIMARY KEY (`student_id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `schedules`
--
ALTER TABLE `schedules`
  MODIFY `schedule_id` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;
--
-- AUTO_INCREMENT for table `students`
--
ALTER TABLE `students`
  MODIFY `student_id` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=1129;
--
-- Constraints for dumped tables
--

--
-- Constraints for table `courses`
--
ALTER TABLE `courses`
  ADD CONSTRAINT `courses_ibfk_1` FOREIGN KEY (`course_id`) REFERENCES `schedules` (`course_id`) ON UPDATE CASCADE;

--
-- Constraints for table `schedules`
--
ALTER TABLE `schedules`
  ADD CONSTRAINT `schedules_ibfk_1` FOREIGN KEY (`course_id`) REFERENCES `courses` (`course_id`) ON DELETE CASCADE ON UPDATE CASCADE,
  ADD CONSTRAINT `schedules_ibfk_2` FOREIGN KEY (`student_id`) REFERENCES `students` (`student_id`) ON DELETE CASCADE ON UPDATE CASCADE;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
